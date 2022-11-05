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
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb0443cda, "nfnetlink_subsys_unregister" },
	{ 0x73b44b9e, "nf_log_packet" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x9a1c71a8, "nfnetlink_subsys_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe4e0dd93, "skb_copy_bits" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "5BD9F28095A77F4BA6B1C1F");
