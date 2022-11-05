cmd_fs/ceph/modules.order := {   echo fs/ceph/ceph.ko; :; } | awk '!x[$$0]++' - > fs/ceph/modules.order
