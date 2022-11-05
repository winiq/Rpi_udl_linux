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
	{ 0x3213f038, "mutex_unlock" },
	{ 0x55b40477, "ip_defrag" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xd93c033c, "nf_unregister_net_hooks" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x73309694, "nf_register_net_hooks" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "52E1D82824810B71BC94219");
