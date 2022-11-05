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
	{ 0x4cfc7bfe, "kill_anon_super" },
	{ 0xf21f9641, "zpool_unregister_driver" },
	{ 0xd0cfbace, "kern_unmount" },
	{ 0xf7e7d39e, "zpool_register_driver" },
	{ 0x70297e22, "kern_mount" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xb6d6ea8f, "kmem_cache_free" },
	{ 0x55c41d22, "__alloc_pages" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd5b24a63, "kmem_cache_alloc" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x4d7272e4, "migrate_enable" },
	{ 0x49608959, "migrate_disable" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x6197c046, "__put_page" },
	{ 0x2eb4c977, "__SetPageMovable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x52e2503d, "page_mapping" },
	{ 0x4829a47e, "memcpy" },
	{ 0x92997ed8, "_printk" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xdf76e8c0, "__free_pages" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x858fce92, "unlock_page" },
	{ 0xc0297886, "__ClearPageMovable" },
	{ 0x6850cb14, "__lock_page" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x930b735, "alloc_anon_inode" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xb7c3f821, "kmem_cache_create" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x9e2df2c7, "init_pseudo" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x73c9b938, "iput" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42422d4a, "kmem_cache_destroy" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0xe68efe41, "_raw_write_lock" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "84DB9F961A82CFBBA84F2AD");
