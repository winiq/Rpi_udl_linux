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
	{ 0x38e46431, "mempool_exit" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1e7bbcb3, "kernel_restart" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x74dcd98c, "dm_bufio_get_aux_data" },
	{ 0x98cf60b3, "strlen" },
	{ 0x1015558b, "dm_get_device" },
	{ 0xed3283a4, "dm_bufio_set_sector_offset" },
	{ 0xd991e3b9, "dm_bufio_get_device_size" },
	{ 0x691406c7, "dm_table_get_md" },
	{ 0xa8dca0ae, "dm_table_get_mode" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9a592dd7, "dm_register_target" },
	{ 0xfd581da1, "free_rs" },
	{ 0xe5a10d36, "dm_disk" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xd2779731, "blk_limits_io_min" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd7cad581, "crypto_ahash_final" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0xdcb764ad, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf1e046cc, "panic" },
	{ 0x8835a6c3, "dm_unregister_target" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xe6024e59, "dm_bufio_release" },
	{ 0x3f7cc1e9, "dm_bufio_client_create" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xac6746f4, "submit_bio_noacct" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x288ed929, "crypto_req_done" },
	{ 0x3bf877b8, "bio_endio" },
	{ 0x9d6bb9e2, "kobject_uevent_env" },
	{ 0xeb2f825c, "init_rs_gfp" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xeca7949e, "dm_bufio_client_destroy" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x45e310e7, "crypto_destroy_tfm" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xb7c3f821, "kmem_cache_create" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0xbdf529e1, "dm_bio_from_per_bio_data" },
	{ 0xb04f56ab, "dm_bufio_read" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x15af7f4, "system_state" },
	{ 0x96848186, "scnprintf" },
	{ 0xc90df7e5, "dm_bufio_prefetch" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xb8db3891, "dm_put_device" },
	{ 0x892f1701, "dm_per_bio_data" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x68c38fa4, "vmalloc_to_page" },
	{ 0x1d29b9e1, "decode_rs8" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x9458179, "crypto_alloc_ahash" },
	{ 0xa008509e, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D40698157C31BAF4E28BF65");
