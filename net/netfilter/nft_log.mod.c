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
	{ 0x2a611f13, "nft_unregister_expr" },
	{ 0xc09592a5, "nft_register_expr" },
	{ 0xeb37101c, "audit_log_end" },
	{ 0xbc4531ac, "audit_log_start" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x73b44b9e, "nf_log_packet" },
	{ 0xd367601c, "nla_put" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0xe1dcf64a, "audit_log_format" },
	{ 0x12bf8d1c, "ipv6_skip_exthdr" },
	{ 0xb8cd3a7f, "nf_logger_put" },
	{ 0x8546a428, "nft_request_module" },
	{ 0x37a0cba, "kfree" },
	{ 0xd1f2eee2, "nf_logger_find_get" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xeb233a45, "__kmalloc" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "8AD27CE73FD1BE028084267");
