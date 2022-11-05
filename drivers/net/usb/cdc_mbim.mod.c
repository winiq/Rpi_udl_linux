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
	{ 0xdec7b694, "usbnet_disconnect" },
	{ 0x81cca809, "usbnet_probe" },
	{ 0x56e8a26, "dev_get_tstats64" },
	{ 0x8fa0a11a, "usbnet_tx_timeout" },
	{ 0x9e25e70a, "cdc_ncm_change_mtu" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0xd9a82f7e, "eth_mac_addr" },
	{ 0x2671ae31, "usbnet_start_xmit" },
	{ 0x6ea456cf, "usbnet_stop" },
	{ 0x67084dce, "usbnet_open" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xaee19add, "in6_dev_finish_destroy" },
	{ 0xaed5719a, "__vlan_find_dev_deep_rcu" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x5da070b7, "ipv6_stub" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xec8ed490, "usbnet_skb_return" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe22d1723, "skb_put" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0x4d611214, "cdc_ncm_rx_verify_ndp16" },
	{ 0x6fa0f028, "cdc_ncm_rx_verify_nth16" },
	{ 0xc2469bb6, "usb_autopm_put_interface" },
	{ 0xdc0b5074, "usb_autopm_get_interface" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x76058bd1, "usb_match_id" },
	{ 0xe02472ef, "usb_set_interface" },
	{ 0xeb0c663a, "usb_cdc_wdm_register" },
	{ 0x57174668, "cdc_ncm_bind_common" },
	{ 0xe4e98c5d, "cdc_ncm_select_altsetting" },
	{ 0x321fd4fc, "usbnet_suspend" },
	{ 0x8aaa0516, "usbnet_resume" },
	{ 0xad7db40, "cdc_ncm_unbind" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x66f0e771, "cdc_ncm_fill_tx_frame" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xb4a70c9c, "netdev_err" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
};

MODULE_INFO(depends, "cdc_ncm,cdc-wdm");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v03F0pA31Dd*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1041d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1061d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1071d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Eip00in*");

MODULE_INFO(srcversion, "F6C662F4CF76360754210EA");
