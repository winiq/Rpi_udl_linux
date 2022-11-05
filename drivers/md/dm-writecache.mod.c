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
	{ 0x8835a6c3, "dm_unregister_target" },
	{ 0x9a592dd7, "dm_register_target" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xd688716b, "dm_kcopyd_client_create" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x1015558b, "dm_get_device" },
	{ 0xa8dca0ae, "dm_table_get_mode" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xac6746f4, "submit_bio_noacct" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xb1d3a15c, "blk_finish_plug" },
	{ 0x79ec8f93, "blk_start_plug" },
	{ 0x7807f0f8, "schedule_timeout_idle" },
	{ 0x90006be6, "dm_kcopyd_client_flush" },
	{ 0x3bf877b8, "bio_endio" },
	{ 0x74b74b74, "dm_bio_get_target_bio_nr" },
	{ 0x7b25f6e4, "dm_accept_partial_bio" },
	{ 0xa008509e, "bio_associate_blkg" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xdcb764ad, "memset" },
	{ 0x392b1fea, "wait_for_completion_io" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa6257a2f, "complete" },
	{ 0x92997ed8, "_printk" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xece784c2, "rb_first" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb19d56eb, "dm_kcopyd_copy" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x965a1c66, "dm_suspended" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0x999e8297, "vfree" },
	{ 0xb8db3891, "dm_put_device" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x8fb4824a, "bioset_exit" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xf82ec573, "rb_prev" },
	{ 0xca9360b5, "rb_next" },
	{ 0x96848186, "scnprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x71270861, "dm_io" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7CEE35DFBD01DFF296D526E");
