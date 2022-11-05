cmd_lib/math/modules.order := {   echo lib/math/cordic.ko; :; } | awk '!x[$$0]++' - > lib/math/modules.order
