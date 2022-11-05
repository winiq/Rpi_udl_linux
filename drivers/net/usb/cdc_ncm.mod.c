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
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc0f38e3d, "ethtool_op_get_ts_info" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xef37ae62, "usb_altnum_to_altsetting" },
	{ 0x8aaa0516, "usbnet_resume" },
	{ 0xef34bf3e, "hrtimer_active" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x81cca809, "usbnet_probe" },
	{ 0x7c1fa7a0, "usbnet_link_change" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xdec7b694, "usbnet_disconnect" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x1cb8a325, "usbnet_get_link_ksettings_internal" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0x6ea456cf, "usbnet_stop" },
	{ 0xd5212df2, "usbnet_update_max_qlen" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0x56e8a26, "dev_get_tstats64" },
	{ 0x865ef606, "netif_schedule_queue" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x4af5c482, "usbnet_nway_reset" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xe02472ef, "usb_set_interface" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x6dddfb6d, "usb_driver_claim_interface" },
	{ 0x392538f8, "usbnet_get_drvinfo" },
	{ 0x2671ae31, "usbnet_start_xmit" },
	{ 0x321fd4fc, "usbnet_suspend" },
	{ 0x4dff8303, "usbnet_get_link" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xbf75d265, "usbnet_read_cmd" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8fa0a11a, "usbnet_tx_timeout" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x49366215, "cdc_parse_cdc_header" },
	{ 0xf0699413, "usbnet_get_ethernet_addr" },
	{ 0xec8ed490, "usbnet_skb_return" },
	{ 0x6bfbee5c, "usb_driver_release_interface" },
	{ 0x67084dce, "usbnet_open" },
	{ 0x47617bd5, "usbnet_get_msglevel" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xbca4cb45, "usbnet_unlink_rx_urbs" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xa5288ee4, "usb_ifnum_to_if" },
	{ 0xaa6c2e1e, "usbnet_cdc_update_filter" },
	{ 0xe22d1723, "skb_put" },
	{ 0xd9a82f7e, "eth_mac_addr" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd4c85baf, "usbnet_manage_power" },
	{ 0x64495964, "usbnet_write_cmd" },
	{ 0x44bf826e, "usbnet_set_msglevel" },
	{ 0x6104545e, "usbnet_set_rx_mode" },
};

MODULE_INFO(depends, "cdc_ether");

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1BC7p0036d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BBd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BCd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1546p1010d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");

MODULE_INFO(srcversion, "17C700A69DC1019D5872541");
