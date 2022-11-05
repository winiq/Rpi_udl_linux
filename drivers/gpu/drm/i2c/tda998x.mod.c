#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xaee236c6, "cec_notifier_conn_unregister" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa07bbbe8, "gpiod_direction_output" },
	{ 0xc468aa75, "drm_hdmi_vendor_infoframe_from_display_mode" },
	{ 0x399a4170, "component_add" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x263b9f14, "drm_atomic_helper_connector_reset" },
	{ 0x6cfc0669, "drm_bridge_attach" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0xa0b9ca9e, "drm_hdmi_avi_infoframe_quant_range" },
	{ 0x65702bd6, "drm_default_rgb_quant_range" },
	{ 0x7cdc1a9e, "drm_helper_probe_single_connector_modes" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x595d8002, "hdmi_infoframe_pack" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd090526b, "drm_kms_helper_hotplug_event" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x49789bf3, "drm_simple_encoder_init" },
	{ 0xdebf2c8b, "platform_device_register_full" },
	{ 0xc16f2887, "cec_notifier_set_phys_addr_from_edid" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x9ebba417, "drm_detect_monitor_audio" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd651913f, "drm_connector_cleanup" },
	{ 0xacf1e92e, "drm_do_get_edid" },
	{ 0x7e80de26, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x104c60b0, "drm_connector_update_edid_property" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x9aac7514, "cec_notifier_conn_register" },
	{ 0x18e2e423, "i2c_new_client_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x19ae336a, "gpiod_direction_input" },
	{ 0x8c05b83d, "irq_get_irq_data" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xba5a062, "drm_add_edid_modes" },
	{ 0xeeb8e6b5, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xca58e44a, "i2c_unregister_device" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xf5b693f6, "drm_connector_init" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x6a725913, "drm_atomic_helper_connector_destroy_state" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x20cf3f7f, "drm_connector_attach_encoder" },
	{ 0x29d46e06, "drm_bridge_remove" },
	{ 0xb22f8129, "of_get_property" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdfbbc39c, "drm_encoder_cleanup" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
	{ 0xe92a4dc3, "drm_of_find_possible_crtcs" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x28677db9, "drm_hdmi_avi_infoframe_from_display_mode" },
	{ 0x8ea1c5bc, "component_del" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa01fbb6b, "cec_notifier_set_phys_addr" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0xa55f0824, "gpiod_set_value" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0xaafca3e9, "drm_bridge_add" },
	{ 0xee45db28, "gpiod_put" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3b80a9f2, "gpiod_get" },
};

MODULE_INFO(depends, "cec,drm,drm_kms_helper");

MODULE_ALIAS("of:N*T*Cnxp,tda998x");
MODULE_ALIAS("of:N*T*Cnxp,tda998xC*");
MODULE_ALIAS("i2c:tda998x");

MODULE_INFO(srcversion, "65E7398A337283D77D33073");
