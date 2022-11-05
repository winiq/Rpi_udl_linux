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
	{ 0x6993f778, "param_ops_string" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x8aaa0516, "usbnet_resume" },
	{ 0x321fd4fc, "usbnet_suspend" },
	{ 0xdec7b694, "usbnet_disconnect" },
	{ 0x81cca809, "usbnet_probe" },
	{ 0xba3cb43b, "rndis_tx_fixup" },
	{ 0xb91763b5, "rndis_rx_fixup" },
	{ 0xea04fe8, "rndis_status" },
	{ 0x56e8a26, "dev_get_tstats64" },
	{ 0x8fa0a11a, "usbnet_tx_timeout" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0xd9a82f7e, "eth_mac_addr" },
	{ 0x2671ae31, "usbnet_start_xmit" },
	{ 0x6ea456cf, "usbnet_stop" },
	{ 0x67084dce, "usbnet_open" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x9e2daf0f, "wiphy_register" },
	{ 0x5d704784, "generic_rndis_bind" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x416d4866, "wiphy_new_nm" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x9e303c02, "cfg80211_disconnected" },
	{ 0xaeeafc8b, "netif_carrier_off" },
	{ 0xaae4e751, "cfg80211_roamed" },
	{ 0x70cb94b1, "cfg80211_ibss_joined" },
	{ 0xaa59303, "netif_carrier_on" },
	{ 0x7c7eca7, "usbnet_resume_rx" },
	{ 0x90293a21, "cfg80211_cqm_rssi_notify" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xfe2f44df, "cfg80211_pmksa_candidate_notify" },
	{ 0xbdd60948, "cfg80211_michael_mic_failure" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6c70a71c, "netdev_info" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x5df6019e, "cfg80211_put_bss" },
	{ 0x3d22d4ab, "cfg80211_inform_bss_data" },
	{ 0xf0fe903d, "cfg80211_connect_done" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb4a70c9c, "netdev_err" },
	{ 0x52074c56, "usbnet_purge_paused_rxq" },
	{ 0x9bacb404, "usbnet_pause_rx" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xc1b99792, "ieee80211_channel_to_freq_khz" },
	{ 0xcccdc877, "wiphy_free" },
	{ 0x1090ef6, "wiphy_unregister" },
	{ 0xbb2fd3ae, "rndis_unbind" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x941bc2ca, "cfg80211_scan_done" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf9a482f9, "msleep" },
	{ 0xae35bbbd, "ieee80211_get_channel_khz" },
	{ 0x5a602b25, "netdev_warn" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4ce89c0c, "rndis_command" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x11089ac7, "_ctype" },
};

MODULE_INFO(depends, "rndis_host,cfg80211");

MODULE_ALIAS("usb:v0411p00BCd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v050Dp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1799p011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0014d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0026d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0B05p1717d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0A5CpD11Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1690p0715d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p000Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp0111d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0411p004Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");

MODULE_INFO(srcversion, "8C64225D0A697B0EDE96BF6");
