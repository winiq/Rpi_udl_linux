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
	{ 0x9ba164b8, "sdio_writeb" },
	{ 0xfa5275a0, "sdio_readb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x49ba01b3, "__pm_runtime_idle" },
	{ 0xd0a2b61b, "lbs_resume" },
	{ 0xe1dcef76, "sdio_writesb" },
	{ 0x94e2491b, "sdio_enable_func" },
	{ 0x23327ede, "sdio_claim_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf93e28a4, "lbs_stop_card" },
	{ 0x2a6ac568, "__pm_runtime_resume" },
	{ 0xc710b300, "netdev_alert" },
	{ 0xceb5457a, "__lbs_cmd" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x866ab8f5, "sdio_get_host_pm_caps" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf0ae9a10, "lbs_start_card" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xad2e2ffd, "lbs_queue_event" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x25ef3691, "lbs_get_firmware_async" },
	{ 0xffed19ef, "lbs_cmd_copyback" },
	{ 0xe77d2cc4, "lbs_suspend" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6e1ead94, "sdio_readsb" },
	{ 0xdb366aab, "sdio_unregister_driver" },
	{ 0x6e107da6, "lbs_remove_card" },
	{ 0xed39356, "sdio_f0_writeb" },
	{ 0x96198230, "sdio_set_host_pm_flags" },
	{ 0xa45c2840, "lbs_process_rxed_packet" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x2a991dac, "sdio_release_irq" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x712544c8, "lbs_host_to_card_done" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0x3a4daf7, "sdio_align_size" },
	{ 0x9fab45d1, "lbs_add_card" },
	{ 0xdfe036d8, "sdio_f0_readb" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x4f027abe, "mmc_add_host" },
	{ 0xb4a70c9c, "netdev_err" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb107d2d3, "mmc_remove_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xba9c29b4, "sdio_register_driver" },
	{ 0x431b0b69, "sdio_claim_host" },
	{ 0xe22d1723, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7bb83659, "sdio_set_block_size" },
	{ 0x161a1171, "sdio_disable_func" },
	{ 0xb4a2de5c, "sdio_release_host" },
	{ 0xd51703b3, "lbs_notify_command_response" },
};

MODULE_INFO(depends, "libertas");

MODULE_ALIAS("sdio:c*v02DFd9103*");
MODULE_ALIAS("sdio:c*v02DFd9104*");

MODULE_INFO(srcversion, "12BEFE9A4E42403FC050CA3");
