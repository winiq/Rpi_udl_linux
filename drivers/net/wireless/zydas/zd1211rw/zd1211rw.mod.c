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
	{ 0xee9ef003, "ieee80211_rx_irqsafe" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9d3fe33c, "ieee80211_beacon_get_tim" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0x5d7062fb, "usb_reset_configuration" },
	{ 0x5dc7a368, "ieee80211_unregister_hw" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd8311a9f, "skb_unlink" },
	{ 0xa730c64e, "ieee80211_stop_queues" },
	{ 0x7e009d2, "usb_unanchor_urb" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x94e4ad63, "ieee80211_alloc_hw_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x646ceca5, "ieee80211_wake_queues" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0xb7377510, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0x6f0b8b9e, "usb_free_coherent" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x1fc1b597, "usb_queue_reset_device" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x36a08a19, "usb_reset_device" },
	{ 0x43e735d6, "usb_bulk_msg" },
	{ 0x59da6f74, "ieee80211_tx_status_irqsafe" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xeb75ebc, "ieee80211_get_buffered_bc" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0xd5225981, "usb_interrupt_msg" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc8864b0d, "usb_get_intf" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x44cad17d, "ieee80211_register_hw" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x444987d3, "regulatory_hint" },
	{ 0x4829a47e, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x68b9556d, "ieee80211_free_hw" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x9d761192, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xe22d1723, "skb_put" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x2f5da2fc, "usb_anchor_urb" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0x1bc37f54, "usb_put_intf" },
	{ 0x58dba3ed, "ieee80211_queue_stopped" },
};

MODULE_INFO(depends, "mac80211,cfg80211");

MODULE_ALIAS("usb:v0105p145Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3407d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3409d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p6001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEpA211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p170Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B3Bp1630d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B3Bp5630d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p9071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p9075d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v126FpA006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v129Bp1666d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep300Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep300Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3204d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3207d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6891pA727d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0053p5301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p0248d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00DAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p1236d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p1237d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp705Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0257d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p340Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p340Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3410d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3412d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3413d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p6001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07FAp1196d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap4505d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApE501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApE503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApE506d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEpB215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p171Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp0121d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v129Bp1667d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep300Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1582p6003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p5303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp2011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F0755AB2CFD81F1477E25B3");
