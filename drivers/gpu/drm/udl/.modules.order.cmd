cmd_drivers/gpu/drm/udl/modules.order := {   echo drivers/gpu/drm/udl/udl.ko; :; } | awk '!x[$$0]++' - > drivers/gpu/drm/udl/modules.order
