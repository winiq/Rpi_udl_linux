cmd_sound/usb/caiaq/modules.order := {   echo sound/usb/caiaq/snd-usb-caiaq.ko; :; } | awk '!x[$$0]++' - > sound/usb/caiaq/modules.order
