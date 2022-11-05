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
	{ 0x6359bf3e, "unregister_quota_format" },
	{ 0xccc04a02, "register_quota_format" },
	{ 0xca55c602, "make_kuid" },
	{ 0x95775e45, "make_kgid" },
	{ 0x8d55bb8a, "qid_eq" },
	{ 0x499cc422, "make_kprojid" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xfa2c29b1, "qtree_entry_unused" },
	{ 0x7ce18c9f, "from_kqid" },
	{ 0xc514b829, "init_user_ns" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa4917eab, "__quota_error" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x2bb6099e, "dq_data_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x269cfb6, "qtree_read_dquot" },
	{ 0x35bbed37, "qtree_write_dquot" },
	{ 0xce807a25, "up_write" },
	{ 0x8b35c210, "qtree_release_dquot" },
	{ 0x57bc19d2, "down_write" },
	{ 0x53b954a2, "up_read" },
	{ 0x82cabe1b, "qtree_get_next_id" },
	{ 0x668b19a1, "down_read" },
};

MODULE_INFO(depends, "quota_tree");


MODULE_INFO(srcversion, "346A40DE11699FE3101DD7C");
