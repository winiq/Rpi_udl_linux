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
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc4284bd3, "dev_get_by_index_rcu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x98cf60b3, "strlen" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x9ac478ac, "__skb_get_hash" },
	{ 0x37a0cba, "kfree" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd367601c, "nla_put" },
	{ 0xf1e98c74, "avenrun" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F9C9BF6393C421311C3983C");
