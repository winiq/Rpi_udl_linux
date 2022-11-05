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
	{ 0x2d3385d3, "system_wq" },
	{ 0x6c70a71c, "netdev_info" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1b673a2e, "skb_clone_tx_timestamp" },
	{ 0x88cc38b3, "__skb_gso_segment" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x86592ac3, "crypto_alloc_shash" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0x5992b1a7, "netdev_notice" },
	{ 0xd17c8ecb, "napi_disable" },
	{ 0x91929663, "napi_schedule_prep" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x5e600909, "usb_enable_lpm" },
	{ 0xaa59303, "netif_carrier_on" },
	{ 0x1406e56c, "usb_driver_set_configuration" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xaeeafc8b, "netif_carrier_off" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xdc0b5074, "usb_autopm_get_interface" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x55c41d22, "__alloc_pages" },
	{ 0x865ef606, "netif_schedule_queue" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x1000e556, "dev_set_mac_address" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0x61c1a3a1, "mii_nway_restart" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdcb707bf, "eth_platform_get_mac_address" },
	{ 0x5ba36750, "ethtool_op_get_link" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0xe150a133, "usb_autopm_put_interface_async" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xe170b657, "crypto_shash_digest" },
	{ 0x2d2d6857, "register_netdev" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x5a921311, "strncmp" },
	{ 0xa0c144bc, "napi_enable" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x3a89a4be, "netif_napi_add" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xc2c5802, "work_busy" },
	{ 0x1fc1b597, "usb_queue_reset_device" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe9104552, "netif_device_attach" },
	{ 0xe36fb66, "napi_gro_receive" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0xdf76e8c0, "__free_pages" },
	{ 0x66e0c1f0, "netif_device_detach" },
	{ 0x5c73c9dc, "usb_autopm_get_interface_async" },
	{ 0xb1022be5, "__napi_schedule" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x36a08a19, "usb_reset_device" },
	{ 0x4af593fc, "skb_checksum_help" },
	{ 0x6029663b, "napi_complete_done" },
	{ 0x21d63b46, "eth_type_trans" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x45e310e7, "crypto_destroy_tfm" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0xb4a70c9c, "netdev_err" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x61e69a3d, "mii_ethtool_get_link_ksettings" },
	{ 0x5a602b25, "netdev_warn" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb0f23765, "skb_add_rx_frag" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x3c35d75a, "unregister_netdev" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x5ebb9ac3, "__napi_alloc_skb" },
	{ 0x853ef3c3, "skb_tstamp_tx" },
	{ 0xe22d1723, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x6197c046, "__put_page" },
	{ 0xc2469bb6, "usb_autopm_put_interface" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0x7abdca01, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8053d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8053d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8155d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8155d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8156d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8156d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep0927d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep0927d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3082d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3082d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp721Ed*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp721Ed*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "DB54F802C6A372C0810C975");
