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
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7deff673, "dm_consume_args" },
	{ 0x53b954a2, "up_read" },
	{ 0x7949e64a, "dm_table_set_type" },
	{ 0x98cf60b3, "strlen" },
	{ 0x1015558b, "dm_get_device" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x40f2a751, "dm_path_uevent" },
	{ 0x691406c7, "dm_table_get_md" },
	{ 0x1d1b6460, "blk_put_request" },
	{ 0xa8dca0ae, "dm_table_get_mode" },
	{ 0x2c6bd463, "dm_start_time_ns_from_clone" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9a592dd7, "dm_register_target" },
	{ 0x346863cf, "dm_table_device_name" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x35a6ab55, "dm_table_event" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x880d0d4a, "blk_lld_busy" },
	{ 0x8835a6c3, "dm_unregister_target" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0xac6746f4, "submit_bio_noacct" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x965a1c66, "dm_suspended" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x3bf877b8, "bio_endio" },
	{ 0x6587c97e, "module_put" },
	{ 0xb1d3a15c, "blk_finish_plug" },
	{ 0xf1594283, "dm_mq_kick_requeue_list" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x96848186, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb8db3891, "dm_put_device" },
	{ 0x892f1701, "dm_per_bio_data" },
	{ 0xeae888c3, "dm_noflush_suspending" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb5a2fe6e, "dm_table_run_md_queue_async" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x82d03f76, "param_ops_ulong" },
	{ 0x89c70df0, "blk_get_request" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x79ec8f93, "blk_start_plug" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0xa008509e, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EA12ECC093465A763F79123");
