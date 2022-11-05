cmd_fs/nfsd/modules.order := {   echo fs/nfsd/nfsd.ko; :; } | awk '!x[$$0]++' - > fs/nfsd/modules.order
