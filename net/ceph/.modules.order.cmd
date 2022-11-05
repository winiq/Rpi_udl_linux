cmd_net/ceph/modules.order := {   echo net/ceph/libceph.ko; :; } | awk '!x[$$0]++' - > net/ceph/modules.order
