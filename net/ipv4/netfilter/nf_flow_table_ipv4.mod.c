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
	{ 0xe1219b15, "nf_flow_offload_ip_hook" },
	{ 0xa1fac75c, "nf_flow_table_free" },
	{ 0x97f1aa1b, "nf_flow_rule_route_ipv4" },
	{ 0xdeedb136, "nf_flow_table_offload_setup" },
	{ 0x5181cb70, "nf_flow_table_init" },
	{ 0x2ed361be, "nft_unregister_flowtable_type" },
	{ 0xb23068ce, "nft_register_flowtable_type" },
};

MODULE_INFO(depends, "nf_flow_table,nf_tables");


MODULE_INFO(srcversion, "E6F8CC868C865F1494B6A35");