ifconfig | grep ether | sed "s/[ ]*ether //" | cut -d" " -f 1
