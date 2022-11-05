cmd_drivers/gpu/drm/v3d/modules.order := {   echo drivers/gpu/drm/v3d/v3d.ko; :; } | awk '!x[$$0]++' - > drivers/gpu/drm/v3d/modules.order
