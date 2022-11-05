cmd_fs/cachefiles/modules.order := {  :; } | awk '!x[$$0]++' - > fs/cachefiles/modules.order
