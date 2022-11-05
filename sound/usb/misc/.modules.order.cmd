cmd_sound/usb/misc/modules.order := {   echo sound/usb/misc/snd-ua101.ko; :; } | awk '!x[$$0]++' - > sound/usb/misc/modules.order
