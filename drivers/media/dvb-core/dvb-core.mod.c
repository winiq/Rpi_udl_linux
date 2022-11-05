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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x3635eb6e, "cdev_del" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3c81c627, "cdev_init" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xc66aa469, "vb2_core_streamoff" },
	{ 0xf9a482f9, "msleep" },
	{ 0x53b954a2, "up_read" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x98cf60b3, "strlen" },
	{ 0xd4a70f75, "vb2_core_dqbuf" },
	{ 0x1b9ef33d, "media_device_unregister_entity" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x2c0fac78, "vb2_mmap" },
	{ 0x210ec49c, "media_devnode_create" },
	{ 0xf71ccc9, "vb2_core_qbuf" },
	{ 0x1e8abc61, "vb2_core_querybuf" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x2bce416, "device_destroy" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x999e8297, "vfree" },
	{ 0xdd64e639, "strscpy" },
	{ 0x6d3a9989, "media_get_pad_index" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0x451d157c, "vb2_core_streamon" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0x2e6a27ca, "netif_rx" },
	{ 0x40b0b194, "vb2_core_poll" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x7fb230bb, "vb2_vmalloc_memops" },
	{ 0x9f64a537, "default_llseek" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe3270f1b, "freezing_slow_path" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x18e2e423, "i2c_new_client_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0x5a73b0e, "media_entity_pads_init" },
	{ 0x4b1a3a2d, "vb2_plane_vaddr" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0xa5a3c487, "vb2_buffer_done" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x2d2d6857, "register_netdev" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0xb7377510, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6626afca, "down" },
	{ 0x95cc0f6b, "noop_llseek" },
	{ 0xe38b0aff, "device_create" },
	{ 0x24d273d1, "add_timer" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xca58e44a, "i2c_unregister_device" },
	{ 0xce807a25, "up_write" },
	{ 0xd24ae152, "vb2_core_queue_release" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x66d87d38, "symbol_put_addr" },
	{ 0xd394de53, "cdev_add" },
	{ 0xcbaee58b, "media_device_register_entity" },
	{ 0x6587c97e, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7a6dd3cf, "eth_header_parse" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xa2cfa672, "alloc_netdev_mqs" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0xa149f723, "media_create_pad_link" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0x15b163f0, "media_create_pad_links" },
	{ 0x6938be15, "media_create_intf_link" },
	{ 0xc81758e5, "ether_setup" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4df02057, "crc32_be" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xcf2a6966, "up" },
	{ 0x265fe5e, "class_destroy" },
	{ 0x7aa6ff5a, "vb2_core_expbuf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3c35d75a, "unregister_netdev" },
	{ 0xd18db692, "vb2_core_reqbufs" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x250a2598, "vb2_core_queue_init" },
	{ 0xe22d1723, "skb_put" },
	{ 0xbad97937, "__class_create" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xcdd04887, "eth_header" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0xbe0e15a5, "media_devnode_remove" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "videobuf2-common,mc,videobuf2-vmalloc");


MODULE_INFO(srcversion, "34181691C6662517609BF77");