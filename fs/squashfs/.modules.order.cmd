cmd_fs/squashfs/modules.order := {   echo fs/squashfs/squashfs.ko; :; } | awk '!x[$$0]++' - > fs/squashfs/modules.order
