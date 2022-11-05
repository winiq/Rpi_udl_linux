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
	{ 0xed9f6bde, "__fib_lookup" },
	{ 0xc09592a5, "nft_register_expr" },
	{ 0x65a7561, "inet_dev_addr_type" },
	{ 0x28b8452, "nft_fib_validate" },
	{ 0x364759ff, "nft_fib_store_result" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2a611f13, "nft_unregister_expr" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4f4244e6, "fib_info_nh_uses_dev" },
	{ 0x52cde233, "nft_fib_init" },
	{ 0xcda9e0ab, "fib_table_lookup" },
	{ 0xb3c36947, "nft_fib_policy" },
	{ 0x3cf3d187, "nft_fib_dump" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe4e0dd93, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_tables,nft_fib");


MODULE_INFO(srcversion, "23B472B3BB6B84E325D9046");
