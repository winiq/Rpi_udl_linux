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
	{ 0x6c17b689, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xee9ef003, "ieee80211_rx_irqsafe" },
	{ 0x29c9a963, "ssb_dma_translation" },
	{ 0xba1aa9c7, "device_remove_file" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x25901b77, "generic_file_llseek" },
	{ 0xb137a4c8, "debugfs_create_dir" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x2ce37cb5, "ieee80211_queue_work" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xd6b7d7fc, "dma_set_mask" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x34f913f4, "ieee80211_rts_get" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9d3fe33c, "ieee80211_beacon_get_tim" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x5dc7a368, "ieee80211_unregister_hw" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1104c2a0, "ssb_bus_powerup" },
	{ 0xe959743c, "dma_free_attrs" },
	{ 0xf47b2831, "debugfs_create_file" },
	{ 0xb57b0749, "wiphy_rfkill_start_polling" },
	{ 0xd3efdf68, "__ieee80211_get_assoc_led_name" },
	{ 0xd98ab0be, "wiphy_rfkill_set_hw_state_reason" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x9fb53f68, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x423885fe, "__ssb_driver_register" },
	{ 0x6993f778, "param_ops_string" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0xccb45252, "ieee80211_stop_queue" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xdcb764ad, "memset" },
	{ 0x438e8557, "dma_sync_single_for_cpu" },
	{ 0x56553d0e, "ssb_driver_unregister" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x94e4ad63, "ieee80211_alloc_hw_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x966957d4, "led_classdev_register_ext" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x646ceca5, "ieee80211_wake_queues" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x9c6f6187, "ssb_device_enable" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x85a8f9d1, "debugfs_remove" },
	{ 0x5792f848, "strlcpy" },
	{ 0x9a88925a, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4f66332e, "__dev_kfree_skb_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xe5e30c93, "ieee80211_ctstoself_get" },
	{ 0x1de95874, "simple_open" },
	{ 0xd393d1bc, "debugfs_create_bool" },
	{ 0xb98c5300, "request_firmware_nowait" },
	{ 0xe0524c20, "ieee80211_queue_delayed_work" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x40ef4d51, "device_create_file" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x95c2a4cb, "__ieee80211_get_rx_led_name" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0xd963fb0d, "ssb_device_disable" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x59da6f74, "ieee80211_tx_status_irqsafe" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x584b154, "dma_map_page_attrs" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x4be2b06b, "dev_driver_string" },
	{ 0x617b026c, "hwrng_register" },
	{ 0x1efe26c5, "__ieee80211_get_tx_led_name" },
	{ 0xc64a2614, "ssb_set_devtypedata" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd94eb89f, "ieee80211_wake_queue" },
	{ 0xf24c4b5, "ieee80211_generic_frame_duration" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x662138fb, "__ieee80211_get_radio_led_name" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x44cad17d, "ieee80211_register_hw" },
	{ 0xfaf784d, "led_classdev_unregister" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x285af5d2, "dma_sync_single_for_device" },
	{ 0x96848186, "scnprintf" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x73534824, "dma_unmap_page_attrs" },
	{ 0x68b9556d, "ieee80211_free_hw" },
	{ 0xf902b25d, "ssb_bus_may_powerdown" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x889cbdca, "ssb_pcicore_dev_irqvecs_enable" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x2d5ff6e1, "debugfs_real_fops" },
	{ 0xd57fbd31, "hwrng_unregister" },
	{ 0xe22d1723, "skb_put" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x3ace6d5a, "ssb_device_is_enabled" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x81874735, "ieee80211_get_response_rate" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mac80211,ssb,cfg80211");

MODULE_ALIAS("ssb:v4243id0812rev02*");
MODULE_ALIAS("ssb:v4243id0812rev04*");

MODULE_INFO(srcversion, "A73D4C0AB22E0079ABFC6AB");
