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
	{ 0x745e056f, "iget_failed" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7bf2069e, "sb_min_blocksize" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0xc3dc3ad3, "unload_nls" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x25901b77, "generic_file_llseek" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x1441f8cd, "iget5_locked" },
	{ 0xf4ce22b8, "from_kuid_munged" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0x9a31bc71, "pagecache_get_page" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x9e8dea29, "ll_rw_block" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0xc514b829, "init_user_ns" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0x56cbe140, "mpage_readahead" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe17220e5, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d4cd323, "page_symlink_inode_operations" },
	{ 0xb40b80ce, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0xeed8cce0, "__getblk_gfp" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaab7d71, "from_kgid_munged" },
	{ 0x95775e45, "make_kgid" },
	{ 0x55c41d22, "__alloc_pages" },
	{ 0xdcb764ad, "memset" },
	{ 0xded17b87, "mpage_readpage" },
	{ 0x11089ac7, "_ctype" },
	{ 0xf68227d1, "__bread_gfp" },
	{ 0xc716e66, "d_obtain_alias" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x76425ad7, "cdrom_multisession" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x5a921311, "strncmp" },
	{ 0xb6d6ea8f, "kmem_cache_free" },
	{ 0xae49cb43, "set_nlink" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x68a4f1a8, "__wait_on_buffer" },
	{ 0xa07a37f0, "memchr" },
	{ 0x711f846b, "generic_ro_fops" },
	{ 0x4e3567f7, "match_int" },
	{ 0x858fce92, "unlock_page" },
	{ 0x9f35bd31, "inode_nohighmem" },
	{ 0x8b956c2, "__brelse" },
	{ 0x4bc06e40, "cdrom_read_tocentry" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x823b287d, "inode_init_once" },
	{ 0xd5b24a63, "kmem_cache_alloc" },
	{ 0xdf76e8c0, "__free_pages" },
	{ 0xca55c602, "make_kuid" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xc3bc839, "load_nls" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x92997ed8, "_printk" },
	{ 0x10a669c7, "unlock_new_inode" },
	{ 0xe597e01f, "kill_block_super" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb7c3f821, "kmem_cache_create" },
	{ 0xdb8ea436, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x73c9b938, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdb892eed, "d_splice_alias" },
	{ 0x137bac3, "sync_filesystem" },
	{ 0xe6f11c79, "sb_set_blocksize" },
	{ 0x184b2ba0, "d_make_root" },
	{ 0xfe0f6fc8, "unregister_filesystem" },
	{ 0x937a1113, "init_special_inode" },
	{ 0xeb9eef52, "match_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x3322c209, "flush_dcache_page" },
	{ 0x6197c046, "__put_page" },
	{ 0x18cc7c27, "generic_block_bmap" },
};

MODULE_INFO(depends, "cdrom");


MODULE_INFO(srcversion, "EE9A02F607F773EB2C7EB5F");
