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
	{ 0x150cf396, "rt2x00usb_resume" },
	{ 0x4b4909be, "rt2x00usb_suspend" },
	{ 0x4d74d92d, "rt2x00usb_disconnect" },
	{ 0xc2bb2517, "rt2x00mac_tx_frames_pending" },
	{ 0x21060ac6, "rt2x00mac_get_ringparam" },
	{ 0x7606c05d, "rt2x00mac_get_antenna" },
	{ 0xed16cc91, "rt2x00mac_set_antenna" },
	{ 0xdf15bb48, "rt2x00mac_flush" },
	{ 0x86b185eb, "rt2x00mac_rfkill_poll" },
	{ 0xa084666b, "rt2x00mac_conf_tx" },
	{ 0x75cc8782, "rt2x00mac_get_stats" },
	{ 0xc50c1641, "rt2x00mac_sw_scan_complete" },
	{ 0xaf0988a7, "rt2x00mac_sw_scan_start" },
	{ 0x1537d72c, "rt2x00mac_set_key" },
	{ 0x24edc622, "rt2x00mac_set_tim" },
	{ 0xd4f89814, "rt2x00mac_configure_filter" },
	{ 0x76a65a8e, "rt2x00mac_bss_info_changed" },
	{ 0xb4ebf6b2, "rt2x00mac_config" },
	{ 0x963a3b2a, "rt2x00mac_remove_interface" },
	{ 0x371a4c3a, "rt2x00mac_add_interface" },
	{ 0xe3f28b23, "rt2x00mac_stop" },
	{ 0x3c42d2c5, "rt2x00mac_start" },
	{ 0xce6cf18a, "rt2x00mac_tx" },
	{ 0x141ba950, "rt2x00usb_flush_queue" },
	{ 0xbe4ea7be, "rt2x00usb_kick_queue" },
	{ 0xa91f5fa1, "rt2x00usb_watchdog" },
	{ 0xcbcd90c6, "rt2x00usb_clear_entry" },
	{ 0x9be0a5da, "rt2x00usb_uninitialize" },
	{ 0x27d58ddd, "rt2x00usb_initialize" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xb0479a67, "rt2x00lib_set_mac_address" },
	{ 0x36f7ec00, "rt2x00usb_disable_radio" },
	{ 0xf9a482f9, "msleep" },
	{ 0x98facd96, "rt2x00usb_vendor_request" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xe80fabce, "rt2x00usb_vendor_req_buff_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5c34178d, "consume_skb" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0xb7377510, "skb_push" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc01d6786, "rt2x00usb_vendor_request_buff" },
	{ 0x9c9f3fee, "rt2x00usb_probe" },
};

MODULE_INFO(depends, "rt2x00usb,rt2x00lib");

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7F73ED42D4DF78E140372C9");
