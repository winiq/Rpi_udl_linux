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
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xb137a4c8, "debugfs_create_dir" },
	{ 0x48009c41, "debugfs_create_u8" },
	{ 0x43a1c1a4, "__hci_cmd_sync" },
	{ 0xa611d8f, "hci_register_dev" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xf47b2831, "debugfs_create_file" },
	{ 0x908054df, "hci_unregister_dev" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xa9c365fd, "debugfs_create_x16" },
	{ 0xfc0c9a7b, "of_property_read_variable_u8_array" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2505bf18, "kstrtol_from_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6a726bed, "skb_queue_purge" },
	{ 0x9f64a537, "default_llseek" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0x85a8f9d1, "debugfs_remove" },
	{ 0xb7377510, "skb_push" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x1de95874, "simple_open" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x3913d2e8, "of_property_read_variable_u16_array" },
	{ 0x37a0cba, "kfree" },
	{ 0xccfdf7f, "hci_alloc_dev_priv" },
	{ 0x4829a47e, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdba32bd7, "hci_free_dev" },
	{ 0xe22d1723, "skb_put" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "424479B65E8F10E47343A28");
