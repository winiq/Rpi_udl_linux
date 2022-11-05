cmd_fs/ecryptfs/modules.order := {   echo fs/ecryptfs/ecryptfs.ko; :; } | awk '!x[$$0]++' - > fs/ecryptfs/modules.order
