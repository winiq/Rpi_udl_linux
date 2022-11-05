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
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x76d76c80, "md_submit_discard_bio" },
	{ 0x9e12a6c4, "md_flush_request" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x258d694, "__traceiter_block_bio_remap" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3bf877b8, "bio_endio" },
	{ 0xc40508c1, "bio_chain" },
	{ 0xb219f8d9, "bio_split" },
	{ 0xac6746f4, "submit_bio_noacct" },
	{ 0xae64f1dd, "__tracepoint_block_bio_remap" },
	{ 0xa008509e, "bio_associate_blkg" },
	{ 0x899d640c, "md_account_bio" },
	{ 0xb73cd16, "acct_bioset_exit" },
	{ 0xebb4769e, "blk_queue_flag_clear" },
	{ 0xf52b7c86, "md_integrity_register" },
	{ 0xec3ade25, "md_set_array_sectors" },
	{ 0xb57c95c7, "blk_queue_flag_set" },
	{ 0x58e19003, "disk_stack_limits" },
	{ 0x60c1e2f4, "blk_queue_io_opt" },
	{ 0x35742f90, "blk_queue_io_min" },
	{ 0x5d785f24, "blk_queue_max_discard_sectors" },
	{ 0xee724a49, "blk_queue_max_write_zeroes_sectors" },
	{ 0x71f49290, "blk_queue_max_write_same_sectors" },
	{ 0x9728a8c4, "blk_queue_max_hw_sectors" },
	{ 0x9e89dd77, "acct_bioset_init" },
	{ 0x65186adf, "md_check_no_bitmap" },
	{ 0x92997ed8, "_printk" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4a08e256, "bdevname" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
};

MODULE_INFO(depends, "md-mod");


MODULE_INFO(srcversion, "F46B5447BE22FC7E693CCBB");
