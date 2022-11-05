cmd_sound/usb/6fire/modules.order := {   echo sound/usb/6fire/snd-usb-6fire.ko; :; } | awk '!x[$$0]++' - > sound/usb/6fire/modules.order
