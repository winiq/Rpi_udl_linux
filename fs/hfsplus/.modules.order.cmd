cmd_fs/hfsplus/modules.order := {   echo fs/hfsplus/hfsplus.ko; :; } | awk '!x[$$0]++' - > fs/hfsplus/modules.order
