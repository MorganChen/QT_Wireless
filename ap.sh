#! /bin/sh

DEVICE=wlan0
AP="dlink"
AP_SCAN_FILE=/tmp/wlanscanning_temp
TEMP_FILE=/tmp/wireless_tmp
TEMP_FILE2=/tmp/wireless_tmp2
AP_FILE=/tmp/wireless_ap_temp
KEY_FILE=/etc/wireless/key
#KEY_FILE=/home/sq/Qt/books/key
AP_INFO_FILE=/tmp/ap_info_file_tmp
TEMP_INFO_FILE=/tmp/wirelessAPtemp

case $1 in
	"scanning")
		D=`ifconfig | grep ${DEVICE}`
		if [ -z "${D}" ]; then
			ifconfig ${DEVICE} up
		fi
		iwlist ${DEVICE} scanning > ${AP_SCAN_FILE}
		cat ${AP_SCAN_FILE} | grep Address | awk '{print $5}' > ${TEMP_FILE}
		cat ${AP_SCAN_FILE} | grep ESSID | sed s/"ESSID:"// > ${TEMP_FILE2}
		paste ${TEMP_FILE} ${TEMP_FILE2} > ${AP_FILE}
		cat ${AP_SCAN_FILE} | grep "Encryption key" | sed s/"Encryption key:"// | sed s/$/" *"/ > ${TEMP_FILE2}
		paste ${AP_FILE} ${TEMP_FILE2} > ${TEMP_FILE}
		cat ${AP_SCAN_FILE} | grep "Quality" | awk '{print $1}' | sed s/"Quality="// | sed s/"\/70"// > ${TEMP_FILE2}
		paste ${TEMP_FILE} ${TEMP_FILE2} > ${AP_FILE}
		;;
	"connect")
		ESSID=`sed -n ${2}p ${AP_FILE} | awk '{print $2}'`
		ENCRYPTION=`sed -n ${2}p ${AP_FILE} | awk '{print $3}'`
		if [ ${ENCRYPTION} == "on" ]; then
			ADDRESS=`sed -n ${2}p ${AP_FILE} | awk '{print $1}'`
			KEY=`cat ${KEY_FILE} | grep ${ADDRESS} | awk '{print $2}'`
			iwconfig ${DEVICE} essid ${ESSID} key ${KEY}
		else
			iwconfig ${DEVICE} essid ${ESSID}
		fi
		dhclient ${DEVICE}
		;;
	"getAPinfo")
		ESSID=`sed -n ${2}p ${AP_FILE} | awk '{print $2}'`
		ADDRESS=`sed -n ${2}p ${AP_FILE} | awk '{print $1}'`
		DHCP=`sed -n /^${ADDRESS}/p ${KEY_FILE} | awk '{print $3}'`
		IP=`sed -n /^${ADDRESS}/p ${KEY_FILE} | awk '{print $4}'`
		GW=`sed -n /^${ADDRESS}/p ${KEY_FILE} | awk '{print $5}'`
		NETMASK=`sed -n /^${ADDRESS}/p ${KEY_FILE} | awk '{print $6}'`
		DNS=`sed -n /^${ADDRESS}/p ${KEY_FILE} | awk '{print $7}'`
#		DHCP=`grep ${ADDRESS} ${KEY_FILE} | awk '{print $3}'`
#		IP=`grep ${ADDRESS} ${KEY_FILE} | awk '{print $4}'`
#		GW=`grep ${ADDRESS} ${KEY_FILE} | awk '{print $5}'`
#		NETMASK=`grep ${ADDRESS} ${KEY_FILE} | awk '{print $6}'`
#		DNS=`grep ${ADDRESS} ${KEY_FILE} | awk '{print $7}'`
		if [ "${DHCP}" != "static" ]; then
			echo ${ADDRESS} > ${AP_INFO_FILE}
			echo ${ESSID} >> ${AP_INFO_FILE}
			echo ${DHCP} >> ${AP_INFO_FILE}
		else
			echo ${ADDRESS} > ${AP_INFO_FILE}
			echo ${ESSID} >> ${AP_INFO_FILE}
			echo ${DHCP} >> ${AP_INFO_FILE}
			echo ${IP} >> ${AP_INFO_FILE}
			echo ${GW} >> ${AP_INFO_FILE}
			echo ${NETMASK} >> ${AP_INFO_FILE}
			echo ${DNS} >> ${AP_INFO_FILE}
		fi
		;;
	"setAPinfo")
		ADDRESS=`cat ${TEMP_INFO_FILE} | awk '{print $1}'`
		KEY=`cat ${TEMP_INFO_FILE} | awk '{print $2}'`
		DHCP=`cat ${TEMP_INFO_FILE} | awk '{print $3}'`
		IP=`cat ${TEMP_INFO_FILE} | awk '{print $4}'`
		GW=`cat ${TEMP_INFO_FILE} | awk '{print $5}'`
		NETMASK=`cat ${TEMP_INFO_FILE} | awk '{print $6}'`
		DNS=`cat ${TEMP_INFO_FILE} | awk '{print $7}'`
		sed -i /^${ADDRESS}/d ${KEY_FILE}
		echo "${ADDRESS} ${KEY} ${DHCP} ${IP} ${GW} ${NETMASK} ${DNS}" >> ${KEY_FILE}
#		if [ -z ${TEMP} ]; then
#			echo "${ADDRESS} ${KEY} ${DHCP} ${IP} ${GW} ${NETMASK} ${DNS}" >> ${KEY_FILE}
#			echo ha
#		else
#			echo "test1"
#			sed -n 's/^${ADDRESS}.*/"${ADDRESS} ${KEY] ${DHCP} ${IP} ${GW} ${NETMASK} ${DNS}"/g' ${KEY_FILE}
#			echo "test2"
#		fi
		;;
	${AP})
		ifconfig ${DEVICE} up
		sleep 1
		iwconfig ${DEVICE} essid ${AP} rate 54M
		sleep 2
		dhclient ${DEVICE}
		;;
	*)
		echo "command not define"
		exit 1
		;;
esac
exit 0
