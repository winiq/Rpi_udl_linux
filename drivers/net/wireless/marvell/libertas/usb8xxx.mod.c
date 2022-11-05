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
	{ 0x6c70a71c, "netdev_info" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaad399fa, "lbs_host_sleep_cfg" },
	{ 0xd0a2b61b, "lbs_resume" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf93e28a4, "lbs_stop_card" },
	{ 0xceb5457a, "__lbs_cmd" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf0ae9a10, "lbs_start_card" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0xad2e2ffd, "lbs_queue_event" },
	{ 0x6cdf94d, "lbs_send_tx_feedback" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x25ef3691, "lbs_get_firmware_async" },
	{ 0xffed19ef, "lbs_cmd_copyback" },
	{ 0xe77d2cc4, "lbs_suspend" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6e107da6, "lbs_remove_card" },
	{ 0xa45c2840, "lbs_process_rxed_packet" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x8452bdbc, "usb_get_dev" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x36a08a19, "usb_reset_device" },
	{ 0x712544c8, "lbs_host_to_card_done" },
	{ 0x4b9e8b64, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x9fab45d1, "lbs_add_card" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe22d1723, "skb_put" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0xd51703b3, "lbs_notify_command_response" },
};

MODULE_INFO(depends, "libertas");

MODULE_ALIAS("usb:v1286p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A3p8388d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4D873C90AE7A3F3CD21BDC8");
