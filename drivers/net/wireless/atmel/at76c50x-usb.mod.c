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
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x729d21b9, "led_trigger_unregister_simple" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x149216c5, "led_trigger_register_simple" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x36a08a19, "usb_reset_device" },
	{ 0xc313ff9a, "_dev_printk" },
	{ 0x44cad17d, "ieee80211_register_hw" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x94e4ad63, "ieee80211_alloc_hw_nm" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x8452bdbc, "usb_get_dev" },
	{ 0x24bb0ddd, "ieee80211_scan_completed" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0xee9ef003, "ieee80211_rx_irqsafe" },
	{ 0xc1b99792, "ieee80211_channel_to_freq_khz" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xdcb764ad, "memset" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc826e9aa, "led_trigger_event" },
	{ 0x646ceca5, "ieee80211_wake_queues" },
	{ 0x59da6f74, "ieee80211_tx_status_irqsafe" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x2ce37cb5, "ieee80211_queue_work" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe0524c20, "ieee80211_queue_delayed_work" },
	{ 0xa730c64e, "ieee80211_stop_queues" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0xe22d1723, "skb_put" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xb7377510, "skb_push" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4b9e8b64, "usb_put_dev" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x92997ed8, "_printk" },
	{ 0x5dc7a368, "ieee80211_unregister_hw" },
	{ 0x68b9556d, "ieee80211_free_hw" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0xea3c74e, "tasklet_kill" },
};

MODULE_INFO(depends, "mac80211,cfg80211");

MODULE_ALIAS("usb:v03EBp7603d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0864p4100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B3Bp1612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p011Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D5CpA001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DDpFF31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0919d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0821d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7604d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055DpA000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0321d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v077Bp2219d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v077Bp2227d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0864p4102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p7605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp4102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p5743d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0506p0A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p001Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p3220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp0032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DDpFF35d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap3501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D5CpA002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7606d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1915p2233d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12FDp1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp7613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p1020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7614d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7617d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7615d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "212B743E0A9B7DD913DBEAE");
