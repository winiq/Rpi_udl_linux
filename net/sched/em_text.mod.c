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
	{ 0x2dc956f9, "tcf_em_unregister" },
	{ 0x839d234b, "tcf_em_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x7476ba4e, "textsearch_prepare" },
	{ 0x7c0b18f0, "skb_find_text" },
	{ 0x95f2af43, "textsearch_destroy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x90f0a827, "nla_append" },
	{ 0xc4ae1fbc, "nla_put_nohdr" },
	{ 0x9166fada, "strncpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0E54FFEB488B5E351B0E649");
