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
	{ 0x42422d4a, "kmem_cache_destroy" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x7eb826e4, "o2nm_node_put" },
	{ 0x72783d57, "o2hb_unregister_callback" },
	{ 0x53b954a2, "up_read" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x25901b77, "generic_file_llseek" },
	{ 0xb137a4c8, "debugfs_create_dir" },
	{ 0x58c88ff2, "o2hb_get_all_regions" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x9c01d02a, "o2hb_register_callback" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8157b3f9, "seq_release_private" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xfe1298f3, "o2net_register_handler" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0xf982e6db, "o2net_send_message" },
	{ 0xf1a5611d, "o2net_unregister_handler_list" },
	{ 0x1b89c6ee, "o2hb_fill_node_map" },
	{ 0xf47b2831, "debugfs_create_file" },
	{ 0x5e95a4b2, "o2net_send_message_vec" },
	{ 0xbd19b5, "seq_read" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0xcf4fdd4d, "_atomic_dec_and_lock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x2a92e121, "__seq_open_private" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xbfd7d7a2, "o2hb_global_heartbeat_active" },
	{ 0x85a8f9d1, "debugfs_remove" },
	{ 0xb6d6ea8f, "kmem_cache_free" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x3b1b7814, "o2hb_setup_callback" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa02aa74a, "__cond_resched_lock" },
	{ 0x6a0c3847, "__mlog_printk" },
	{ 0xd5b24a63, "kmem_cache_alloc" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xae2a73de, "o2nm_get_node_by_num" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3d9ee9f0, "clear_page" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb7c3f821, "kmem_cache_create" },
	{ 0xbd13ee5d, "o2hb_check_node_heartbeating_no_sem" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x2e6432e0, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb6ebf62a, "o2nm_this_node" },
	{ 0x96848186, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49cd25ed, "alloc_workqueue" },
};

MODULE_INFO(depends, "ocfs2_nodemanager");


MODULE_INFO(srcversion, "0645B1D22FD4073979B673D");
