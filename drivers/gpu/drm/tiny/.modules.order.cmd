cmd_drivers/gpu/drm/tiny/modules.order := {   echo drivers/gpu/drm/tiny/panel-mipi-dbi.ko;   echo drivers/gpu/drm/tiny/hx8357d.ko;   echo drivers/gpu/drm/tiny/ili9225.ko;   echo drivers/gpu/drm/tiny/ili9341.ko;   echo drivers/gpu/drm/tiny/mi0283qt.ko;   echo drivers/gpu/drm/tiny/repaper.ko;   echo drivers/gpu/drm/tiny/st7586.ko;   echo drivers/gpu/drm/tiny/st7735r.ko; :; } | awk '!x[$$0]++' - > drivers/gpu/drm/tiny/modules.order