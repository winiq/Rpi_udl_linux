cmd_net/unix/modules.order := {   echo net/unix/unix_diag.ko; :; } | awk '!x[$$0]++' - > net/unix/modules.order
