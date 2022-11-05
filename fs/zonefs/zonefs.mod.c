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
	{ 0x3d774594, "fs_bio_set" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xf0021cc4, "blkdev_report_zones" },
	{ 0xda458023, "submit_bio_wait" },
	{ 0xf73c85f0, "iov_iter_npages" },
	{ 0x53b954a2, "up_read" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x20834d4a, "bio_alloc_bioset" },
	{ 0xc1a693f1, "iomap_is_partially_uptodate" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe9ee2343, "__set_page_dirty_nobuffers" },
	{ 0x30906d21, "filemap_fault" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x89b6737a, "generic_file_llseek_size" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xcd5e5ea9, "send_sig" },
	{ 0x2565c4e2, "rcuwait_wake_up" },
	{ 0x2681af70, "iomap_dio_iopoll" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0x910b6d7a, "blkdev_issue_flush" },
	{ 0x2692bb6c, "generic_file_open" },
	{ 0xfb8167f8, "simple_lookup" },
	{ 0xac1186f6, "__percpu_down_read" },
	{ 0x2211a4c0, "blk_op_str" },
	{ 0x29c4566a, "touch_atime" },
	{ 0x814e762b, "dput" },
	{ 0x44e9a829, "match_token" },
	{ 0x2cf13a2, "inc_nlink" },
	{ 0xb855c751, "iomap_writepages" },
	{ 0xc514b829, "init_user_ns" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe17220e5, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x9021564e, "d_add" },
	{ 0xc844af35, "trace_event_buffer_reserve" },
	{ 0xd2b2d4cc, "noop_direct_IO" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xe0e379dc, "bpf_trace_run3" },
	{ 0x491ebcc2, "truncate_setsize" },
	{ 0x668b19a1, "down_read" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0x95775e45, "make_kgid" },
	{ 0x55c41d22, "__alloc_pages" },
	{ 0x119705ae, "bio_init" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x7e8df7dd, "bio_add_page" },
	{ 0x408aa505, "trace_event_reg" },
	{ 0xeb1e8f42, "iomap_swapfile_activate" },
	{ 0xb6d6ea8f, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xae49cb43, "set_nlink" },
	{ 0xc71be896, "file_update_time" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x9f7e77e9, "setattr_copy" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x1aef4801, "generic_file_read_iter" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x6d12ab22, "perf_trace_run_bpf_submit" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x696d325a, "bio_put" },
	{ 0xa13391fc, "file_write_and_wait_range" },
	{ 0x823b287d, "inode_init_once" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x208c260d, "iomap_page_mkwrite" },
	{ 0x6dd78607, "iomap_invalidatepage" },
	{ 0xd5b24a63, "kmem_cache_alloc" },
	{ 0xdf76e8c0, "__free_pages" },
	{ 0xdd18cf86, "simple_dir_operations" },
	{ 0xca55c602, "make_kuid" },
	{ 0x9411c006, "trace_event_ignore_this_pid" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x578243e2, "blkdev_zone_mgmt" },
	{ 0x92997ed8, "_printk" },
	{ 0xe597e01f, "kill_block_super" },
	{ 0x80721fe9, "iomap_writepage" },
	{ 0x15ab9597, "iomap_dio_rw" },
	{ 0xf16c3b80, "iomap_readpage" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x8fc0c468, "trace_event_buffer_commit" },
	{ 0x2f6cf752, "bio_iov_iter_get_pages" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xb7c3f821, "kmem_cache_create" },
	{ 0x1a70e362, "dquot_transfer" },
	{ 0xdb8ea436, "register_filesystem" },
	{ 0xb4b84623, "event_triggers_call" },
	{ 0x5af0020c, "bpf_trace_run2" },
	{ 0x59b48850, "iter_file_splice_write" },
	{ 0x73c9b938, "iput" },
	{ 0x1c179a5a, "bio_release_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c63bc49, "inode_dio_wait" },
	{ 0xe672abdf, "trace_event_raw_init" },
	{ 0x88e7257a, "current_time" },
	{ 0x27c66f44, "generic_error_remove_page" },
	{ 0x332f134e, "iomap_releasepage" },
	{ 0xe5242610, "d_genocide" },
	{ 0x137bac3, "sync_filesystem" },
	{ 0xe6f11c79, "sb_set_blocksize" },
	{ 0xe2158c9f, "trace_event_printf" },
	{ 0x184b2ba0, "d_make_root" },
	{ 0xd1b2ec27, "d_alloc_name" },
	{ 0xfe0f6fc8, "unregister_filesystem" },
	{ 0x550f416b, "trace_raw_output_prep" },
	{ 0x46ffc4a5, "iomap_file_buffered_write" },
	{ 0x8a0ec237, "filemap_map_pages" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd479a573, "new_inode" },
	{ 0xe9fe0786, "blkdev_nr_zones" },
	{ 0xcd02d52f, "generic_file_splice_read" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa7f54e3a, "iomap_migrate_page" },
	{ 0x3d9649e4, "vfs_fsync_range" },
	{ 0x4663c18b, "setattr_prepare" },
	{ 0xb5306818, "iomap_readahead" },
	{ 0xa3447157, "inode_init_owner" },
	{ 0xa008509e, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "19CAD9AEAFA986A61D61D98");
