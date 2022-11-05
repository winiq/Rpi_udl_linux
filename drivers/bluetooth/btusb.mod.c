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
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x7e1f2a86, "btrtl_shutdown_realtek" },
	{ 0x932a053f, "btrtl_setup_realtek" },
	{ 0xbb8ef1f9, "btbcm_set_bdaddr" },
	{ 0x819b934c, "btbcm_setup_patchram" },
	{ 0xa5288ee4, "usb_ifnum_to_if" },
	{ 0x10bcece3, "btbcm_setup_apple" },
	{ 0x61842d36, "btintel_configure_setup" },
	{ 0x76058bd1, "usb_match_id" },
	{ 0xa611d8f, "hci_register_dev" },
	{ 0x6dddfb6d, "usb_driver_claim_interface" },
	{ 0x3913d2e8, "of_property_read_variable_u16_array" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xbecec813, "of_irq_get_byname" },
	{ 0x6ad73e27, "of_match_device" },
	{ 0x931d650b, "gpiod_get_optional" },
	{ 0xccfdf7f, "hci_alloc_dev_priv" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x163df996, "usb_get_from_anchor" },
	{ 0xe02472ef, "usb_set_interface" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x54e9dd8d, "usb_enable_autosuspend" },
	{ 0x151d30d4, "pm_runtime_forbid" },
	{ 0xd929e5d5, "__pm_runtime_suspend" },
	{ 0xbcc3bd13, "pm_runtime_allow" },
	{ 0x214e4265, "bt_warn" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0x8125a88d, "hci_recv_diag" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0xe22d1723, "skb_put" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x718b8b7, "bt_info" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x43e735d6, "usb_bulk_msg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x24b8d1c4, "btintel_bootup" },
	{ 0xfc2afb21, "btintel_secure_send_result" },
	{ 0x24e98923, "hci_recv_frame" },
	{ 0xc2469bb6, "usb_autopm_put_interface" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x4829a47e, "memcpy" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x1fc1b597, "usb_queue_reset_device" },
	{ 0xdc0b5074, "usb_autopm_get_interface" },
	{ 0x1aa8cd26, "__hci_cmd_sync_ev" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x43a1c1a4, "__hci_cmd_sync" },
	{ 0x6bfbee5c, "usb_driver_release_interface" },
	{ 0xdba32bd7, "hci_free_dev" },
	{ 0xee45db28, "gpiod_put" },
	{ 0x908054df, "hci_unregister_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x37a0cba, "kfree" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x7e009d2, "usb_unanchor_urb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x2f5da2fc, "usb_anchor_urb" },
	{ 0x37804aa, "usb_alloc_urb" },
};

MODULE_INFO(depends, "btrtl,btbcm,btintel,bluetooth");

MODULE_ALIAS("of:N*T*Cusb1286,204e");
MODULE_ALIAS("of:N*T*Cusb1286,204eC*");
MODULE_ALIAS("of:N*T*Cusbcf3,e300");
MODULE_ALIAS("of:N*T*Cusbcf3,e300C*");
MODULE_ALIAS("of:N*T*Cusb4ca,301a");
MODULE_ALIAS("of:N*T*Cusb4ca,301aC*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Bp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0BB4p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0E25F351DD9D531622E7110");
