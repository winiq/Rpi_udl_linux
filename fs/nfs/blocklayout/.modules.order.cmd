cmd_fs/nfs/blocklayout/modules.order := {  :; } | awk '!x[$$0]++' - > fs/nfs/blocklayout/modules.order
