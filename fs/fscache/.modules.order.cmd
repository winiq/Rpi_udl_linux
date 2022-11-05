cmd_fs/fscache/modules.order := {  :; } | awk '!x[$$0]++' - > fs/fscache/modules.order
