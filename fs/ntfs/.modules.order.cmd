cmd_fs/ntfs/modules.order := {   echo fs/ntfs/ntfs.ko; :; } | awk '!x[$$0]++' - > fs/ntfs/modules.order
