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
	{ 0x826655e4, "param_ops_int" },
	{ 0x2508d730, "unregister_md_personality" },
	{ 0x3e729503, "register_md_personality" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xb4bff49, "bio_copy_data" },
	{ 0x83af36f, "bio_trim" },
	{ 0xda458023, "submit_bio_wait" },
	{ 0x6eeb0fad, "rdev_clear_badblocks" },
	{ 0xa216ab19, "md_check_recovery" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0x24409824, "sync_page_io" },
	{ 0xc4950e6d, "md_finish_reshape" },
	{ 0x65a699d, "rdev_set_badblocks" },
	{ 0x7e8df7dd, "bio_add_page" },
	{ 0x20834d4a, "bio_alloc_bioset" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xfdeaf1cf, "md_bitmap_close_sync" },
	{ 0xa7c8ffee, "md_bitmap_end_sync" },
	{ 0x3dcdf3e4, "md_bitmap_start_sync" },
	{ 0x5644cf79, "md_bitmap_cond_end_sync" },
	{ 0x910eb12b, "kernfs_notify" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7d2a0e1c, "sysfs_create_link" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5f551ac4, "md_new_event" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2991f416, "md_bitmap_resize" },
	{ 0x62261fd9, "md_error" },
	{ 0x4e7ffdae, "md_do_sync" },
	{ 0xf52b7c86, "md_integrity_register" },
	{ 0xec3ade25, "md_set_array_sectors" },
	{ 0xebb4769e, "blk_queue_flag_clear" },
	{ 0x9fce33f1, "md_unregister_thread" },
	{ 0x35742f90, "blk_queue_io_min" },
	{ 0xee724a49, "blk_queue_max_write_zeroes_sectors" },
	{ 0x71f49290, "blk_queue_max_write_same_sectors" },
	{ 0x5d785f24, "blk_queue_max_discard_sectors" },
	{ 0x7eff72a0, "mddev_init_writes_pending" },
	{ 0x76d76c80, "md_submit_discard_bio" },
	{ 0x9e12a6c4, "md_flush_request" },
	{ 0xdcb764ad, "memset" },
	{ 0x60d87a38, "md_write_start" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xa423b38c, "md_bitmap_startwrite" },
	{ 0xcf0b77cb, "md_wait_for_blocked_rdev" },
	{ 0xd56cc0e8, "md_register_thread" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc73df17a, "bioset_init" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xb57c95c7, "blk_queue_flag_set" },
	{ 0x58e19003, "disk_stack_limits" },
	{ 0x566d229f, "md_integrity_add_rdev" },
	{ 0xc40508c1, "bio_chain" },
	{ 0xb219f8d9, "bio_split" },
	{ 0x4727996a, "bio_start_io_acct" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x76e72fc6, "badblocks_check" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x258d694, "__traceiter_block_bio_remap" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd27b25dd, "blk_check_plugged" },
	{ 0xae64f1dd, "__tracepoint_block_bio_remap" },
	{ 0xfebb029d, "bio_clone_fast" },
	{ 0x5a7fa0d6, "__trace_note_message" },
	{ 0x8fb4824a, "bioset_exit" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x16dd27b5, "bio_end_io_acct_remapped" },
	{ 0x92997ed8, "_printk" },
	{ 0x4a08e256, "bdevname" },
	{ 0x4829a47e, "memcpy" },
	{ 0x55c41d22, "__alloc_pages" },
	{ 0xb1415fd8, "bio_kmalloc" },
	{ 0x4e534251, "md_done_sync" },
	{ 0x6197c046, "__put_page" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x696d325a, "bio_put" },
	{ 0xeb47741a, "md_cluster_ops" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x379e2513, "bio_reset" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x60c1e2f4, "blk_queue_io_opt" },
	{ 0x56470118, "__warn_printk" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x33164f54, "md_wakeup_thread" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3bf877b8, "bio_endio" },
	{ 0xb1d3a15c, "blk_finish_plug" },
	{ 0xac6746f4, "submit_bio_noacct" },
	{ 0xa008509e, "bio_associate_blkg" },
	{ 0xa500ee2b, "md_bitmap_unplug" },
	{ 0x79ec8f93, "blk_start_plug" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x2f7b5b1b, "md_write_end" },
	{ 0x2d442029, "md_bitmap_endwrite" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "md-mod");


MODULE_INFO(srcversion, "ABF0977E19AA6052877BBBB");
