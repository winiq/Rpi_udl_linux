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
	{ 0x8835a6c3, "dm_unregister_target" },
	{ 0x9a592dd7, "dm_register_target" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xe3270f1b, "freezing_slow_path" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x392b1fea, "wait_for_completion_io" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x98cf60b3, "strlen" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x3bf877b8, "bio_endio" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdf76e8c0, "__free_pages" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa34a2ee2, "submit_bio" },
	{ 0x7e8df7dd, "bio_add_page" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xdcb764ad, "memset" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x55c41d22, "__alloc_pages" },
	{ 0xa008509e, "bio_associate_blkg" },
	{ 0x20834d4a, "bio_alloc_bioset" },
	{ 0x3d774594, "fs_bio_set" },
	{ 0xa6257a2f, "complete" },
	{ 0x92997ed8, "_printk" },
	{ 0x696d325a, "bio_put" },
	{ 0x4804f088, "bio_free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb8db3891, "dm_put_device" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0x37a0cba, "kfree" },
	{ 0x1015558b, "dm_get_device" },
	{ 0xa8dca0ae, "dm_table_get_mode" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x892f1701, "dm_per_bio_data" },
	{ 0x96848186, "scnprintf" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9EB44ACD78618C075735F9F");
