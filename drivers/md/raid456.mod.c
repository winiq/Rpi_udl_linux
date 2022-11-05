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
	{ 0x90f80122, "blkdev_issue_discard" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x766a0927, "mempool_alloc_pages" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb219f8d9, "bio_split" },
	{ 0x42422d4a, "kmem_cache_destroy" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa7bfae19, "__cpuhp_remove_state" },
	{ 0xda458023, "submit_bio_wait" },
	{ 0x6d35ad5b, "async_raid6_datap_recov" },
	{ 0x60c1e2f4, "blk_queue_io_opt" },
	{ 0x20834d4a, "bio_alloc_bioset" },
	{ 0x65a699d, "rdev_set_badblocks" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0x9728a8c4, "blk_queue_max_hw_sectors" },
	{ 0x76e72fc6, "badblocks_check" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x9431d5f, "mddev_suspend" },
	{ 0x910b6d7a, "blkdev_issue_flush" },
	{ 0xae64f1dd, "__tracepoint_block_bio_remap" },
	{ 0x2d442029, "md_bitmap_endwrite" },
	{ 0xa216ab19, "md_check_recovery" },
	{ 0x35742f90, "blk_queue_io_min" },
	{ 0x2f7b5b1b, "md_write_end" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0xacf7679, "dma_issue_pending_all" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe091c977, "list_sort" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xf9f83f9, "async_syndrome_val" },
	{ 0x5f551ac4, "md_new_event" },
	{ 0xc73df17a, "bioset_init" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa500ee2b, "md_bitmap_unplug" },
	{ 0xee724a49, "blk_queue_max_write_zeroes_sectors" },
	{ 0x2508d730, "unregister_md_personality" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xb15b4109, "crc32c" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xa038cbad, "md_write_inc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x899d640c, "md_account_bio" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x379e2513, "bio_reset" },
	{ 0x55c41d22, "__alloc_pages" },
	{ 0xd27b25dd, "blk_check_plugged" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x2b30f429, "raid6_call" },
	{ 0xdcb764ad, "memset" },
	{ 0xd56cc0e8, "md_register_thread" },
	{ 0x119705ae, "bio_init" },
	{ 0x9e12a6c4, "md_flush_request" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x48c093fb, "_atomic_dec_and_lock_irqsave" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6df8f89f, "sysfs_create_group" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x88b115ac, "md_update_sb" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xa7c8ffee, "md_bitmap_end_sync" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x7e8df7dd, "bio_add_page" },
	{ 0x4e7ffdae, "md_do_sync" },
	{ 0x4b053a4e, "async_raid6_2data_recov" },
	{ 0xfebb029d, "bio_clone_fast" },
	{ 0x219a2564, "async_trigger_callback" },
	{ 0x91c1cdd0, "__cpuhp_state_add_instance" },
	{ 0x58e19003, "disk_stack_limits" },
	{ 0x6a6dbabd, "blkdev_issue_zeroout" },
	{ 0xf557e98b, "__traceiter_block_unplug" },
	{ 0xc40508c1, "bio_chain" },
	{ 0x80badff4, "__tracepoint_block_unplug" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xec16ebfd, "mddev_unlock" },
	{ 0x5a921311, "strncmp" },
	{ 0xd985dc99, "mempool_free_pages" },
	{ 0xb6d6ea8f, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xac6746f4, "submit_bio_noacct" },
	{ 0x4e198f32, "async_memcpy" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x66b01bc6, "__cpuhp_setup_state" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xcf0b77cb, "md_wait_for_blocked_rdev" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3bf877b8, "bio_endio" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0x696d325a, "bio_put" },
	{ 0xb73cd16, "acct_bioset_exit" },
	{ 0x4e534251, "md_done_sync" },
	{ 0x8fb4824a, "bioset_exit" },
	{ 0x64e8c03f, "kthread_unpark" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7d2a0e1c, "sysfs_create_link" },
	{ 0x4727996a, "bio_start_io_acct" },
	{ 0xebb4769e, "blk_queue_flag_clear" },
	{ 0xa34a2ee2, "submit_bio" },
	{ 0xb1d3a15c, "blk_finish_plug" },
	{ 0x19b73411, "async_xor_offs" },
	{ 0xd5b24a63, "kmem_cache_alloc" },
	{ 0xdf76e8c0, "__free_pages" },
	{ 0xb3abc2f2, "async_xor" },
	{ 0x69049cd2, "radix_tree_replace_slot" },
	{ 0xc66ef1c7, "unregister_shrinker" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xddb1cd7, "llist_reverse_order" },
	{ 0xb57c95c7, "blk_queue_flag_set" },
	{ 0x60d87a38, "md_write_start" },
	{ 0x4a08e256, "bdevname" },
	{ 0x5a7fa0d6, "__trace_note_message" },
	{ 0xb89520e3, "async_tx_quiesce" },
	{ 0x41efdeaf, "radix_tree_lookup_slot" },
	{ 0x6eeb0fad, "rdev_clear_badblocks" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xbfd8840f, "md_allow_write" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xec3ade25, "md_set_array_sectors" },
	{ 0x3d9ee9f0, "clear_page" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x1bc57c3d, "__cpuhp_state_remove_instance" },
	{ 0xede640dc, "bio_clone_blkg_association" },
	{ 0x9e89dd77, "acct_bioset_init" },
	{ 0x33164f54, "md_wakeup_thread" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x16dd27b5, "bio_end_io_acct_remapped" },
	{ 0x910eb12b, "kernfs_notify" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x36eb1cbd, "kthread_park" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb7c3f821, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfdeaf1cf, "md_bitmap_close_sync" },
	{ 0x24409824, "sync_page_io" },
	{ 0x9fce33f1, "md_unregister_thread" },
	{ 0x7b6b6096, "async_gen_syndrome" },
	{ 0x258d694, "__traceiter_block_bio_remap" },
	{ 0xc4950e6d, "md_finish_reshape" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa423b38c, "md_bitmap_startwrite" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x47eadf1d, "register_shrinker" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x8b2ffd83, "__cpu_present_mask" },
	{ 0xa379cb53, "async_xor_val_offs" },
	{ 0x62261fd9, "md_error" },
	{ 0x5644cf79, "md_bitmap_cond_end_sync" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0x3dcdf3e4, "md_bitmap_start_sync" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9715ca3e, "mddev_resume" },
	{ 0xa21f1cf0, "md_find_rdev_rcu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x7eff72a0, "mddev_init_writes_pending" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0x2991f416, "md_bitmap_resize" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x79ec8f93, "blk_start_plug" },
	{ 0x71f49290, "blk_queue_max_write_same_sectors" },
	{ 0x6197c046, "__put_page" },
	{ 0x3e729503, "register_md_personality" },
	{ 0x4ed7dfd2, "set_disk_ro" },
	{ 0xa008509e, "bio_associate_blkg" },
};

MODULE_INFO(depends, "async_raid6_recov,md-mod,async_pq,raid6_pq,async_tx,async_memcpy,async_xor");


MODULE_INFO(srcversion, "2B089CB7D186E8E579B87E5");